/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>
#import <Maps/RAPAddressCellDelegate.h>

@class ReportAProblemAddressTableViewCell, RAPPlaceCorrectableString, NSString;

@interface RAPReportComposerIncorrectNameSection : RAPTablePartSection <RAPAddressCellDelegate> {

	ReportAProblemAddressTableViewCell* _cell;
	RAPPlaceCorrectableString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForRowAtIndex:(long long)arg1 ;
-(void)valueForAddressType:(int)arg1 changedTo:(id)arg2 ;
-(void)reportAProblemCellDidBecomeFirstResponder:(id)arg1 ;
-(void)reportAProblemCellDidResignFirstResponder:(id)arg1 ;
-(void)reportAProblemCellCorrectnessStatusChanged:(id)arg1 ;
-(void)reportAProblemCellShouldAdvanceToNextResponder:(id)arg1 ;
-(void)reportAProblemCellShouldAdvanceToPreviousResponder:(id)arg1 ;
-(id)initWithCorrectableString:(id)arg1 ;
-(long long)rowsCount;
@end

