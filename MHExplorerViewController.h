#import "MHViewController.h"
#import "MHSDKInstallerController.h"
#import "MHTableEntry.h"
#import "MHHeaderViewController.h"
#import "MHUtils.h"

@interface MHExplorerViewController : MHViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, readonly) NSString *cellIdentifier;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSMutableArray *entries;
@property (nonatomic, strong) NSURL *directoryURL;
-(void)loadEntries;
-(void)SDKWasInstalled;
-(id)initWithURL:(NSURL *)url;
@end