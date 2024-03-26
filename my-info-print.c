// OSSP_hw_2 - 2020112145 김해환
#include <stdio.h>
#define NAME_LENGTH 50
#define STUDENTID_LENGTH 30
#define TEAM_NAME_LENGTH 100

int main() {
    char name[NAME_LENGTH];
    char studentId[STUDENTID_LENGTH];
    char teamName[TEAM_NAME_LENGTH];

    // 입력
    printf("이름을 입력하세요: ");
    scanf("%s", name);

    printf("학번을 입력하세요: ");
    scanf("%s", studentId);

    printf("팀 이름을 입력하세요: ");
    scanf("%s", teamName);

    // 출력
    printf("\n<출력>\n");
    printf("이름: %s\n", name);
    printf("학번: %s\n", studentId);
    printf("팀 이름: %s\n", teamName);

    return 0;
}