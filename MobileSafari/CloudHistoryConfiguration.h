/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBSCloudHistoryConfiguration.h>

@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {

	NSArray* _assetsSortedByVersionNumber;
	NSDictionary* _remoteConfigurationDictionary;
	BOOL _fetchedAssetData;

}
+(id)sharedConfiguration;
-(void)_reloadConfigurationDataIfNecessary;
-(id)_cloudConfigurationAssetsSortedByVersionNumber;
-(id)init;
-(id)remoteConfiguration;
-(id)platformBuiltInConfiguration;
@end

