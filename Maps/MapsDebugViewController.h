/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsDebugViewController <NSObject>
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MapsDebugViewControllerNavigationDelegate> navigationDelegate; 
@required
+(id)navigationDestinationTitle;
-(void)segueToViewController:(id)arg1;
-(void)willNavigateToSubsequentController:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<MapsDebugViewControllerDelegate>)delegate;
-(CGSize*)preferredContentSize;
-(id<MapsDebugViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

