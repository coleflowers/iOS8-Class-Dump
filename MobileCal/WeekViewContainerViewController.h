/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MainViewControllerContainer.h>

@class CompactWidthWeekViewController, LargeWeekViewController;

@interface WeekViewContainerViewController : MainViewControllerContainer {

	CompactWidthWeekViewController* _compactController;
	LargeWeekViewController* _regularController;

}

@property (nonatomic,retain) CompactWidthWeekViewController * compactController;              //@synthesize compactController=_compactController - In the implementation block
@property (nonatomic,retain) LargeWeekViewController * regularController;                     //@synthesize regularController=_regularController - In the implementation block
-(id)currentChildViewController;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(BOOL)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(BOOL)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(LargeWeekViewController *)regularController;
-(void)setRegularController:(LargeWeekViewController *)arg1 ;
-(BOOL)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(id)childViewControllerForCompactWidthCompactHeight;
-(CompactWidthWeekViewController *)compactController;
-(void)setCompactController:(CompactWidthWeekViewController *)arg1 ;
@end

