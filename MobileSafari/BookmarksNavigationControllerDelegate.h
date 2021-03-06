/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BookmarksNavigationControllerDelegate <BrowserPanelDelegate>
@optional
-(void)bookmarksNavigationController:(id)arg1 activityWasSelected:(id)arg2;
-(id)containingBookmarkForNavigationController:(id)arg1;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg1;
-(void)bookmarksNavigationControllerDidReload:(id)arg1;
-(void)bookmarksNavigationControllerDidPressDoneButton:(id)arg1;
-(void)bookmarksNavigationControllerDidTapOutsideFavorites:(id)arg1;
-(id)bookmarksNavigationControllerCurrentWebFeedURL:(id)arg1;
-(void)bookmarksNavigationControllerSubscribeToCurrentWebFeed:(id)arg1;

@required
-(id)browserPanel;
-(void)bookmarksNavigationController:(id)arg1 didSelectNavigationDestination:(id)arg2;

@end

