/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/PHSearchResultProtocol.h>

@class NSString;

@interface PHCallerIDObject : NSObject <PHSearchResultProtocol> {

	NSString* _callerId;

}

@property (retain) NSString * callerId;                             //@synthesize callerId=_callerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)isoCountryCode;
-(void)dealloc;
-(id)handles;
-(id)addressBookRecordId;
-(id)callerNameForDisplay;
-(id)IDSCanonicalAddress;
-(void)setCallerId:(NSString *)arg1 ;
-(NSString *)callerId;
@end
