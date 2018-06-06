/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSURL, NSMutableArray, TabDocument;

@interface WebClipMetadataFetcher : NSObject {

	NSDictionary* _metaTags;
	NSArray* _linkTags;
	NSURL* _canonicalURL;
	NSMutableArray* _metadataConsumers;
	BOOL _fetchingCompleted;
	TabDocument* _tabDocument;

}
-(id)initWithTabDocument:(id)arg1 ;
-(void)fetchMetadataWithConsumer:(/*^block*/id)arg1 ;
-(void)_startFetchingMetadata;
-(id)_webClipLinkTagWithDictionary:(id)arg1 ;
@end

