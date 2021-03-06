/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont;

@interface _MailboxContentViewCellLayoutValues : NSObject {

	UIFont* _addressFont;
	UIFont* _dateFont;
	UIFont* _subjectFont;
	UIFont* _summaryFont;
	UIFont* _mailboxFont;
	double _rowHeight;
	double _topPadding;
	double _leading;
	double _addressCapHeight;
	double _dateCapHeight;
	double _subjectCapHeight;
	double _summaryCapHeight;
	double _bottomPadding;

}

@property (nonatomic,readonly) UIFont * addressFont; 
@property (nonatomic,readonly) UIFont * dateFont; 
@property (nonatomic,readonly) UIFont * subjectFont; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) UIFont * mailboxFont; 
@property (nonatomic,readonly) double compactRowHeight; 
@property (nonatomic,readonly) double defaultRowHeight; 
@property (nonatomic,readonly) double leading; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double addressCapHeight; 
@property (nonatomic,readonly) double dateCapHeight; 
@property (nonatomic,readonly) double subjectCapHeight; 
@property (nonatomic,readonly) double summaryCapHeight; 
@property (nonatomic,readonly) double bottomPadding; 
+(id)sharedInstance;
-(double)compactRowHeight;
-(UIFont *)dateFont;
-(UIFont *)mailboxFont;
-(double)addressCapHeight;
-(double)dateCapHeight;
-(UIFont *)addressFont;
-(UIFont *)subjectFont;
-(UIFont *)summaryFont;
-(double)heightWithNumberOfSummaryLines:(int)arg1 ;
-(double)subjectCapHeight;
-(double)summaryCapHeight;
-(double)topPadding;
-(double)bottomPadding;
-(void)dealloc;
-(void)invalidate;
-(double)leading;
-(double)defaultRowHeight;
@end

