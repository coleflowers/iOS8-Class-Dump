/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchResultsAction.h>

@class UIViewController;

@interface SBSearchResultsViewControllerAction : SBSearchResultsAction {

	/*^block*/id _completionBlock;
	UIViewController* _viewController;

}

@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
@end

