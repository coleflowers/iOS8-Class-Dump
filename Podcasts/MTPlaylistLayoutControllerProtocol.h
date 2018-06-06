/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTPlaylistLayoutControllerProtocol <NSObject>
@property (nonatomic,copy) id settingsBlock; 
@property (assign,nonatomic,__weak) id<MTPlaylistLayoutViewControllerDelegate> layoutDelegate; 
@required
+(Class)playlistSettingsClass;
-(void)setDownloadButtonEnabled:(BOOL)arg1;
-(id<MTPlaylistLayoutViewControllerDelegate>)layoutDelegate;
-(void)updateEditingState:(BOOL)arg1 animated:(BOOL)arg2;
-(void)playlistSettingsDidChange;
-(id)settingsBlock;
-(void)setSettingsBlock:(/*^block*/id)arg1;
-(void)setLayoutDelegate:(id)arg1;

@end
