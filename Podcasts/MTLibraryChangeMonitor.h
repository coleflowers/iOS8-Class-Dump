/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class NSHashTable;

@interface MTLibraryChangeMonitor : NSObject {

	NSHashTable* _notifiers;

}

@property (nonatomic,retain) NSHashTable * notifiers;              //@synthesize notifiers=_notifiers - In the implementation block
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(id)init;
-(id)copy;
-(NSHashTable *)notifiers;
-(void)setNotifiers:(NSHashTable *)arg1 ;
-(void)notify:(id)arg1 ;
@end

