#ifndef A_LIB_H
#define A_LIB_H
#include <string.h>
#include <errno.h>

/**************************************************
 * マクロ
 **************************************************/
#define PERROR(str) printf("%s %s: %s\n", "[ERROR]", str, strerror(errno))

/**************************************************
 * 型
 **************************************************/
typedef unsigned long ULONG;


/**************************************************
 * 関数
 **************************************************/

/**************************************************
 * 関数名: char_to_string
 * 引数  : char ch    変換したい文字
 * 内容  : char型変数をchar *型に変換する
 * 作成日: 2018/09/01
 **************************************************/
char *char_to_string(char ch);


#endif /* A_LIB_H */
