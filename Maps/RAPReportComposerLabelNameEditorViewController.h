/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>

@class RAPLabelCorrectionsQuestion, RAPReportComposerPaddedIncorrectNamePart, RAPReportComposerLabelPickingSection, RAPTablePart, RAPReportComposerCommentPart;

@interface RAPReportComposerLabelNameEditorViewController : RAPReportTableViewController {

	RAPLabelCorrectionsQuestion* _question;
	RAPReportComposerPaddedIncorrectNamePart* _nameEditorPart;
	RAPReportComposerLabelPickingSection* _labelSection;
	RAPTablePart* _labelPart;
	RAPReportComposerCommentPart* _commentPart;

}
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tableParts;
@end

