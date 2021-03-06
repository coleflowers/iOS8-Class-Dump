/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIView, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface SlidableMasterSplitViewController : UISplitViewController <UIGestureRecognizerDelegate, UISplitViewControllerDelegate> {

	UIView* _tapView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	/*^block*/id _slideOutCompletionBlock;
	double _panHysteresisHorizontalLocation;
	unsigned long long _masterViewState;
	unsigned long long _lastGestureRecognized;

}

@property (readonly) BOOL isMasterViewShownOnTop; 
@property (assign,nonatomic) BOOL allowUserInteractionWithDetailView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMasterViewShownOnTop;
-(void)masterViewWillSlideIn:(BOOL)arg1 ;
-(BOOL)masterViewCanSlideOut;
-(void)removeTapGestureRecognizer;
-(BOOL)masterViewCanSlideIn;
-(void)slideInMasterViewAnimated:(BOOL)arg1 ;
-(void)slideOutMasterViewAnimated:(BOOL)arg1 forcibly:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)masterViewWillSlideOut:(BOOL)arg1 ;
-(void)masterViewDidSlideOut:(BOOL)arg1 ;
-(BOOL)allowUserInteractionWithDetailView;
-(void)_slideInOrNavigateBack:(BOOL)arg1 ;
-(void)slideOutMasterViewAnimated:(BOOL)arg1 ;
-(void)masterViewDidSlideIn:(BOOL)arg1 ;
-(void)setAllowUserInteractionWithDetailView:(BOOL)arg1 ;
-(void)addTapGestureRecognizer;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)tap:(id)arg1 ;
-(void)_splitViewController:(id)arg1 didUnSlideViewController:(id)arg2 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)_primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(void)pan:(id)arg1 ;
@end

