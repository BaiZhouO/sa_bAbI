#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_6;                                       // Tag.BODY
    char entity_9[55];                                  // Tag.BODY
    char entity_7[51];                                  // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_6 = 51;                                      // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_4 = 90;                                      // Tag.BODY
    for(entity_5 = 0; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_9[entity_5] = 'D';                           // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                                      // Tag.POINTER_DEC
    entity_2 = &entity_5;                               // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_2 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_7[entity_6] = '3';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER