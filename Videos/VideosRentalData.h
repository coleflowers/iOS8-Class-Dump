/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:55:36 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VideosUserNotification, NSObject, NSDictionary, UILocalNotification, NSString, NSDate;

@interface VideosRentalData : NSObject {

	VideosUserNotification* _alert;
	long long _deferRentalEventsCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _downloadIdentifier;
	BOOL _failed;
	NSDictionary* _fileProcessorInfo;
	BOOL _isPlaying;
	UILocalNotification* _lastFiredLocalNotification;
	BOOL _loaded;
	NSString* _mediaPath;
	NSDate* _playbackDate;
	unsigned long long _trackPersistentIdentifier;

}

@property (readonly) NSDate * expirationDate; 
@property (readonly) double playbackTimeRemaining; 
@property (readonly) int rentalState; 
@property (readonly) unsigned long long trackPersistentIdentifier; 
@property (readonly) BOOL willExpireSoon; 
@property (getter=isPlaying) BOOL playing; 
@property (readonly) long long downloadIdentifier; 
@property (copy,readonly) NSString * mediaPath; 
@property (readonly) NSDate * nextEventDate; 
@property (getter=isDeferringRentalEvents,readonly) BOOL deferringRentalEvents; 
+(BOOL)_shouldReadDemoRentalInfoForMediaItem:(id)arg1 ;
-(BOOL)willExpireSoon;
-(int)rentalState;
-(void)performActionForLocalNotification:(id)arg1 ;
-(void)resetForReason:(unsigned long long)arg1 ;
-(void)setFileProcessorInfo:(id)arg1 ;
-(void)performDeferredLocalNotifications;
-(NSDate *)nextEventDate;
-(id)copyNextLocalNotification;
-(void)beginDeferringRentalEvents;
-(void)endDeferringRentalEvents;
-(unsigned long long)trackPersistentIdentifier;
-(void)_loadDemoRentalInfoFromMediaItem:(id)arg1 ;
-(void)_setFileProcessorInfo:(id)arg1 ;
-(id)_nextEventDate;
-(BOOL)isDeferringRentalEvents;
-(void)_setLastFiredLocalNotification:(id)arg1 ;
-(void)_performActionForEventWithTimeUntilExpiration:(double)arg1 ;
-(id)_lastFiredLocalNotification;
-(id)_playbackEndDate;
-(id)_rentalEndDate;
-(void)_showAlertForTimeUntilExpiration:(double)arg1 ;
-(id)_newAlertTitleForTimeUntilExpiration:(double)arg1 ;
-(void)_refreshAlert;
-(double)playbackTimeRemaining;
-(void)synchronizeLocalData;
-(id)initWithMediaItem:(id)arg1 ;
-(long long)downloadIdentifier;
-(NSString *)mediaPath;
-(void)setLoaded:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)_expirationDate;
-(void)setFailed:(BOOL)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
@end

