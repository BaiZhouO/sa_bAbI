#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_8[72];                       // Tag.BODY
    int entity_7;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_1 = rand();                       // Tag.BODY
    entity_7 = 53;                           // Tag.BODY
    if(entity_1 < entity_7){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_1 = 94;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_8[entity_1] = 'k';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_3;                           // Tag.POINTER_DEC
    entity_3 = &entity_1;                    // Tag.POINTER_DEC
    char *entity_4 = (char *)(entity_3 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER