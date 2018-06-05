/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSString;

@interface AlarmScheduleLayoutAttributes : UICollectionViewLayoutAttributes {

	NSString* _alarmId;
	long long _day;
	BOOL _active;
	BOOL _showsTitle;
	NSString* _title;

}

@property (nonatomic,retain) NSString * alarmId;                       //@synthesize alarmId=_alarmId - In the implementation block
@property (assign,nonatomic) long long day;                            //@synthesize day=_day - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                          //@synthesize showsTitle=_showsTitle - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isActive;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setDay:(long long)arg1 ;
-(long long)day;
-(NSString *)alarmId;
-(void)setAlarmId:(NSString *)arg1 ;
-(BOOL)showsTitle;
-(void)setShowsTitle:(BOOL)arg1 ;
@end
