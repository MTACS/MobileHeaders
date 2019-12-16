#import "MHTableViewController.h"
#import "MHHeaderViewController.h"
#import "MHTableEntry.h"
#import "MHUtils.h"

@interface MHSearchViewController : MHTableViewController <UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating>
@property (nonatomic, strong) NSMutableArray *entries;
@property (nonatomic, strong) UISearchController *searchController;
@property (nonatomic, strong, readonly) NSString *cellIdentifier;
-(NSMutableArray *)contentsOfDirectory:(NSURL *)url;
-(NSMutableArray *)recursiveSearchForFilesWithName:(NSString *)name startingURL:(NSURL *)url;
@end