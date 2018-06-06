/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:34:19 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>

@class UIViewController;

@interface RCSplitViewController : UISplitViewController {

	UIViewController* _listOnlyViewController;
	UIViewController* _recordAndListViewController;

}

@property (nonatomic,readonly) UIViewController * listOnlyViewController;                   //@synthesize listOnlyViewController=_listOnlyViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * recordAndListViewController;              //@synthesize recordAndListViewController=_recordAndListViewController - In the implementation block
-(id)initUsingListOnlyNavigationViewController:(id)arg1 recordAndListNavigationViewController:(id)arg2 ;
-(UIViewController *)recordAndListViewController;
-(UIViewController *)listOnlyViewController;
@end

