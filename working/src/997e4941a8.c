#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_8[61];                                  // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_2 = 60;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    for(entity_0 = 9; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_8[entity_0] = '1';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_3;                                      // Tag.POINTER_DEC
    entity_3 = &entity_0;                               // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_3 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER