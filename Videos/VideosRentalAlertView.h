/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@interface VideosRentalAlertView : UIAlertView {

	int _alertReason;

}

@property (assign,nonatomic) int alertReason;              //@synthesize alertReason=_alertReason - In the implementation block
+(id)alertViewForRental:(id)arg1 ;
+(id)_willExpireSoonAlert;
+(id)_initialPlaybackAlertWithTimeRemaining:(double)arg1 ;
+(id)_generalErrorAlert;
-(int)alertReason;
-(void)setAlertReason:(int)arg1 ;
@end

