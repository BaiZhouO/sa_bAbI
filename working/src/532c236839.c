#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    char entity_4[76];                                  // Tag.BODY
    entity_7 = 51;                                      // Tag.BODY
    int entity_0;                                       // Tag.BODY
    for(entity_0 = 5; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_4[entity_0] = '8';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                      // Tag.POINTER_DEC
    entity_1 = &entity_0;                               // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_1 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER