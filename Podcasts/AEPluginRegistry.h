/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AEPluginRegistry : NSObject {

	NSMutableDictionary* _extensionPlugins;
	NSMutableDictionary* _schemePlugins;
	NSMutableDictionary* _assetTypePlugins;

}
+(id)sharedInstance;
-(void)registerAssetEnginePlugin:(id)arg1 forExtension:(id)arg2 ;
-(void)registerAssetEnginePlugin:(id)arg1 ;
-(void)unregisterAssetEnginePlugin:(id)arg1 ;
-(id)pluginForURL:(id)arg1 ;
-(id)pluginForAssetType:(id)arg1 ;
-(id)init;
-(id)pluginForExtension:(id)arg1 ;
@end
