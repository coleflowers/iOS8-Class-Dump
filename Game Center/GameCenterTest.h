/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@class NSMutableDictionary, NSString, UIWindow;

@interface GameCenterTest : UIApplication <UIApplicationTestingDelegate> {

	NSMutableDictionary* _optionsPerTest;
	NSMutableDictionary* _actionsPerTest;

}

@property (nonatomic,retain) NSMutableDictionary * optionsPerTest;              //@synthesize optionsPerTest=_optionsPerTest - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionsPerTest;              //@synthesize actionsPerTest=_actionsPerTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(void)setPPTest:(id)arg1 action:(/*^block*/id)arg2 ;
+(void)failIfPPTesting:(id)arg1 ;
+(void)completeIfPPTesting:(id)arg1 ;
-(void)setPPTest:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)failIfPPTesting:(id)arg1 ;
-(void)completeIfPPTesting:(id)arg1 ;
-(id)optionsForPPTest:(id)arg1 ;
-(BOOL)shouldStartTest:(id)arg1 ;
-(void)_performScrollTest:(id)arg1 onView:(id)arg2 ;
-(void)_test:(id)arg1 switchToTab:(id)arg2 collectionViewController:(id)arg3 ;
-(void)PPTest_logout:(id)arg1 ;
-(void)PPTest_games_loading:(id)arg1 ;
-(void)PPTest_friends_loading:(id)arg1 ;
-(void)PPTest_games_scrolling:(id)arg1 ;
-(void)PPTest_friends_scrolling:(id)arg1 ;
-(void)PPTest_me_scrolling:(id)arg1 ;
-(void)PPTest_login:(id)arg1 ;
-(void)PPTest_friends_detail:(id)arg1 ;
-(void)PPTest_games_detail:(id)arg1 ;
-(NSMutableDictionary *)optionsPerTest;
-(void)setOptionsPerTest:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)actionsPerTest;
-(void)setActionsPerTest:(NSMutableDictionary *)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

