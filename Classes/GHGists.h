#import <Foundation/Foundation.h>
#import "GHResource.h"


@interface GHGists : GHResource
@property(nonatomic,strong)NSMutableArray *gists;

- (id)initWithPath:(NSString *)thePath;
@end