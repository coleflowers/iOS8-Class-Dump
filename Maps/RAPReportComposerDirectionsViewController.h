/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPDirectionsWhichOneQuestion, RAPTablePart, RAPDirectionsRequestsCheckmarkSection, RAPReportComposerCommentPart;

@interface RAPReportComposerDirectionsViewController : RAPReportTableViewController {

	RAPDirectionsWhichOneQuestion* _question;
	RAPTablePart* _directionsRequestsPart;
	RAPDirectionsRequestsCheckmarkSection* _directionsRequestsSection;
	RAPReportComposerCommentPart* _commentPart;

}
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateParts;
-(void)dealloc;
-(void)viewDidLoad;
@end

