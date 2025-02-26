#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <windows.h>
#include <ctype.h>

const char* code_template = 
"#include<bits/stdc++.h>\n"
"using namespace std;\n"
"#define MOD 1e9+7\n"
"using ll = long long;\n\n"
"int solve() {\n\n"
"    return 0;\n"
"}\n\n"
"int main() {\n"
"    int n;\n"
"    cin>>n;\n"
"    while(n--)\n"
"    solve();\n"
"    return 0;\n"
"}\n";

int find_max_round() {
    WIN32_FIND_DATA findData;
    HANDLE hFind;
    int max_num = 0;

    hFind = FindFirstFile("*", &findData);
    if (hFind == INVALID_HANDLE_VALUE) {
        printf("无法打开目录 (错误码 %lu)\n", GetLastError());
        exit(EXIT_FAILURE);
    }

    do {
        if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            if (strncmp(findData.cFileName, "Round", 5) == 0) {
                char *num_start = findData.cFileName + 5;
                char *end;
                long num = strtol(num_start, &end, 10);
                
                if (*end == '\0' && num >= 0) {
                    if (num > max_num) {
                        max_num = num;
                    }
                }
            }
        }
    } while (FindNextFile(hFind, &findData) != 0);

    FindClose(hFind);
    return max_num;
}

void create_files(const char *dir_name) {
    char path[MAX_PATH];
    
    for (char c = 'a'; c <= 'e'; ++c) {
        snprintf(path, MAX_PATH, "%s\\%c.cpp", dir_name, c);
        FILE *f = fopen(path, "w");
        if (!f) {
            printf("创建文件失败：%s (错误码 %d)\n", path, errno);
            exit(EXIT_FAILURE);
        }
        fprintf(f, "%s", code_template);
        fclose(f);
    }
}

int main() {
    // 禁用安全警告
    _set_error_mode(_OUT_TO_STDERR);
    
    // 查找最大的Round编号
    int max_round = find_max_round();
    
    // 创建新目录
    char new_dir[32];
    snprintf(new_dir, sizeof(new_dir), "Round%d", max_round + 1);
    
    if (_mkdir(new_dir) == -1) {
        printf("创建目录失败：%s (错误码 %d)\n", new_dir, errno);
        exit(EXIT_FAILURE);
    }
    
    // 创建cpp文件
    create_files(new_dir);
    
    printf("成功创建目录和文件：%s\n", new_dir);
    return 0;
}