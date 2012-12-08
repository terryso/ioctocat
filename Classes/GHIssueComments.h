#import <Foundation/Foundation.h>
#import "GHResource.h"


@interface GHIssueComments : GHResource

@property(nonatomic,strong)NSMutableArray *comments;
@property(nonatomic,strong)id parent; // a GHIssue or GHPullRequest instance

- (id)initWithParent:(id)theParent;

@end