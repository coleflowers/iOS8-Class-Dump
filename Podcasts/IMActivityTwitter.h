/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMActivity.h>

@class TWTweetComposeViewController;

@interface IMActivityTwitter : IMActivity {

	TWTweetComposeViewController* _tweetViewController;

}

@property (nonatomic,retain) TWTweetComposeViewController * tweetViewController;              //@synthesize tweetViewController=_tweetViewController - In the implementation block
-(BOOL)canPerformActivityItems:(id)arg1 ;
-(void)setTweetViewController:(TWTweetComposeViewController *)arg1 ;
-(TWTweetComposeViewController *)tweetViewController;
-(void)dealloc;
-(id)activityType;
-(id)activityTitle;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
@end
