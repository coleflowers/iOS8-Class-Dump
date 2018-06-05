/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>
#import <Maps/RAPReportComposerCommentPartOutput.h>

@class NSString, NSArray;

@interface RAPCommentQuestion : RAPQuestion <RAPReportComposerCommentPartOutput> {

	NSString* _commentsTitle;
	NSString* _commentsPlaceholderText;
	long long _emphasis;
	NSString* _comment;
	NSArray* _photos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * commentsTitle; 
@property (nonatomic,readonly) NSString * commentsPlaceholderText; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSArray * photos; 
@property (nonatomic,readonly) long long emphasis; 
@property (nonatomic,readonly) NSString * commentsTitle;                        //@synthesize commentsTitle=_commentsTitle - In the implementation block
@property (nonatomic,readonly) NSString * commentsPlaceholderText;              //@synthesize commentsPlaceholderText=_commentsPlaceholderText - In the implementation block
@property (nonatomic,readonly) long long emphasis;                              //@synthesize emphasis=_emphasis - In the implementation block
@property (nonatomic,copy) NSString * comment;                                  //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                    //@synthesize photos=_photos - In the implementation block
+(id)_localizedOptionalInformationTitle;
+(id)photosFooter;
+(id)_localizedMoreInformationTitle;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5 ;
-(BOOL)_isNowComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(void)_setCommentsTitle:(id)arg1 placeholderText:(id)arg2 ;
-(NSString *)commentsTitle;
-(NSString *)commentsPlaceholderText;
-(long long)emphasis;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end
