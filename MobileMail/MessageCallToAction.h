/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MessageCallToAction : NSObject {

	BOOL _primaryActionCompleted;
	long long _category;
	NSString* _supplementaryActionTitle;
	id _context;

}

@property (assign,nonatomic) long long category;                                                       //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,retain,readonly) UIImage * notificationAppIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * primaryActionTitle; 
@property (nonatomic,copy,readonly) NSString * secondaryActionTitle; 
@property (assign,getter=isPrimaryActionCompleted,nonatomic) BOOL primaryActionCompleted;              //@synthesize primaryActionCompleted=_primaryActionCompleted - In the implementation block
@property (nonatomic,copy) NSString * supplementaryActionTitle;                                        //@synthesize supplementaryActionTitle=_supplementaryActionTitle - In the implementation block
@property (nonatomic,retain) id context;                                                               //@synthesize context=_context - In the implementation block
+(id)callsToActionFromSuggestions:(id)arg1 ;
-(BOOL)isPrimaryActionCompleted;
-(NSString *)supplementaryActionTitle;
-(NSString *)primaryActionTitle;
-(NSString *)secondaryActionTitle;
-(UIImage *)notificationAppIcon;
-(void)setPrimaryActionCompleted:(BOOL)arg1 ;
-(void)setSupplementaryActionTitle:(NSString *)arg1 ;
-(BOOL)isEqualToCallToAction:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSString *)subtitle;
-(long long)compare:(id)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
@end

