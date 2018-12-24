#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_6[88];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 96;                           // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 65;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_3] = 'I';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER