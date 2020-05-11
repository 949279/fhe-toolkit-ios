/*
* IBM Confidential
*
*
* Copyright IBM Corporation 2020.
*
* The source code for this program is not published or otherwise divested of
* its trade secrets, irrespective of what has been deposited with the US
* Copyright Office.
*/

#import <UIKit/UIKit.h>
#import "CountryData.h"

NS_ASSUME_NONNULL_BEGIN

@interface CountryCapitalTableViewController : UITableViewController

@property (nonatomic, strong) CountryData *dataSource;

@end

NS_ASSUME_NONNULL_END
