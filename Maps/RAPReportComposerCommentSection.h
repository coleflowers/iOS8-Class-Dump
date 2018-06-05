/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPTablePartSection.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RAPReportComposerCommentPartOutput;
@class NSString;

@interface RAPReportComposerCommentSection : RAPTablePartSection <UITextViewDelegate> {

	id<RAPReportComposerCommentPartOutput> _question;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditingCommentIfPossible;
-(void)registerReuseIdentifiersForCells;
-(id)cellForRowAtIndex:(long long)arg1 ;
-(id)initWithOutput:(id)arg1 ;
-(double)heightForRowAtIndex:(long long)arg1 ;
-(long long)rowsCount;
@end
