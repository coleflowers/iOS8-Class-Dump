/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPReportComposerLabelCorrectionController, RAPReportComposerImageryCorrectionController, RAPReportComposerAddPlaceController;

@interface RAPReportComposerCategoryViewController : RAPReportTableViewController {

	RAPReportComposerLabelCorrectionController* _labelCorrectionController;
	RAPReportComposerImageryCorrectionController* _imageryCorrectionController;
	RAPReportComposerAddPlaceController* _addPlaceController;

}
-(id)initWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_segueToViewControllerForSelectedInitialCategory;
-(void)viewDidLoad;
-(void)_cancel;
@end
