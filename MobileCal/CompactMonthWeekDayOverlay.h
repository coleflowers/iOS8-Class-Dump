/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSDate;

@interface CompactMonthWeekDayOverlay : UIView {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)_generateImageForString:(id)arg1 isWeekend:(BOOL)arg2 underlineThickness:(double)arg3 ;
+(id)_cachedImageForString:(id)arg1 isWeekend:(BOOL)arg2 underlineThickness:(double)arg3 ;
+(id)_font;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)update;
@end

