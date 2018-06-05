/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>

@class EKEventViewController, EKEventEditViewController, UIViewController, EKEvent, NSArray, EventDetailNavigationController, UITraitCollection;

@interface EventDetailContainerViewController : UIViewController {

	EKEventViewController* _eventViewController;
	EKEventEditViewController* _activeEventEditor;
	UIViewController* _baseViewController;
	EKEvent* _event;
	NSArray* _viewControllersOnNavStack;
	EventDetailNavigationController* _detailsNavController;
	CGSize _preferredContentSize;
	UITraitCollection* _destinationTraits;

}

@property (nonatomic,readonly) UIViewController * baseViewController; 
@property (nonatomic,readonly) EKEventViewController * eventViewController; 
@property (nonatomic,readonly) EKEventEditViewController * activeEventEditor; 
@property (nonatomic,readonly) EKEvent * event; 
+(id)eventDetailContainerWithEvent:(id)arg1 delegate:(id)arg2 ;
+(id)eventEditContainerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3 ;
+(Class)_ABPersonViewControllerClass;
-(void)completePresentationAfterSizeClassChangeWithEventViewDelegate:(id)arg1 ;
-(UIViewController *)baseViewController;
-(id)initWithEventEditViewController:(id)arg1 ;
-(id)initWithPersonViewController:(id)arg1 event:(id)arg2 ;
-(id)initWithEventViewController:(id)arg1 ;
-(id)initWithViewController:(id)arg1 event:(id)arg2 ;
-(void)_putDetailsViewControllerInPlace;
-(void)_putEditViewControllerInPlace;
-(void)_resetStyling;
-(void)_cleanUpDetailsNavigationController;
-(void)_cleanUpBaseViewController;
-(BOOL)_baseIsABPersonVC;
-(id)_navigationControllerToUse;
-(BOOL)_needToHaveOwnNavController;
-(void)backPressed;
-(BOOL)_isPageSheetPresentation;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(EKEventViewController *)eventViewController;
-(void)setActiveEventEditor:(EKEventEditViewController *)arg1 ;
-(EKEventEditViewController *)activeEventEditor;
-(id)navigationItem;
-(id)title;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)toolbarItems;
-(EKEvent *)event;
-(void)donePressed;
@end

