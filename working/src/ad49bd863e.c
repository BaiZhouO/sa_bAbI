#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_2[55];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_0 = 0;                                       // Tag.BODY
    int entity_9;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_9 = 71;                                      // Tag.BODY
    char entity_3[87];                                  // Tag.BODY
    for(entity_8 = 6; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_8] = 'K';                           // Tag.BUFWRITE_COND_SAFE
    int *entity_6;                                      // Tag.POINTER_DEC
    entity_6 = &entity_8;                               // Tag.POINTER_DEC
    entity_2[entity_0] = 'T';                           // Tag.BUFWRITE_TAUT_SAFE
    char *entity_7 = (char *)(entity_6 + 1);            // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER