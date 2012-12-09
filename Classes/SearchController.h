#import <UIKit/UIKit.h>


@class GHUser, UserObjectCell;

@interface SearchController : UITableViewController
@property(nonatomic,strong)UserObjectCell *userObjectCell;
@property(nonatomic,strong)IBOutlet UISearchBar *searchBar;
@property(nonatomic,strong)IBOutlet UISegmentedControl *searchControl;
@property(nonatomic,strong)IBOutlet UITableViewCell *loadingCell;
@property(nonatomic,strong)IBOutlet UITableViewCell *noResultsCell;

- (id)initWithUser:(GHUser *)theUser;
- (void)quitSearching:(id)sender;
- (IBAction)switchChanged:(id)sender;
@end