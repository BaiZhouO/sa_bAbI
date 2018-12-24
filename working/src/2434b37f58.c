#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_6[43];                                  // Tag.BODY
    int entity_3;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_3 = 42;                                      // Tag.BODY
    for(entity_5 = 4; entity_5 < entity_3; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_5] = 'T';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                      // Tag.POINTER_DEC
    entity_0 = &entity_5;                               // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_0 + 3);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER