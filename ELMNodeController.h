#import "ASNodeController.h"
#import "ELMComponent.h"
#import "ELMController.h"

@interface ELMNodeController : ASNodeController <ELMController>
@property (nonatomic, weak, readwrite) id <ELMController> parent;
- (const void *)materializationContext;
- (ELMComponent *)owningComponent;
- (NSArray <ELMComponent *> *)children;
@end
