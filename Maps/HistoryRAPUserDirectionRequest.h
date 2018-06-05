/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPUserDirectionRequest.h>

@class RAPDirectionsRecording, DirectionsHistoryItem, NSString;

@interface HistoryRAPUserDirectionRequest : NSObject <RAPUserDirectionRequest> {

	RAPDirectionsRecording* _recording;
	DirectionsHistoryItem* _historyItem;

}

@property (nonatomic,readonly) DirectionsHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)requestedTransportType;
-(id)initWithHistoryItem:(id)arg1 recording:(id)arg2 ;
-(id)recording;
-(DirectionsHistoryItem *)historyItem;
@end
