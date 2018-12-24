#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_8;                                       // Tag.BODY
    entity_8 = 74;                                      // Tag.BODY
    int entity_3;                                       // Tag.BODY
    char entity_2[85];                                  // Tag.BODY
    for(entity_3 = 1; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_3] = 'N';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                                      // Tag.POINTER_DEC
    entity_0 = &entity_3;                               // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_0 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER