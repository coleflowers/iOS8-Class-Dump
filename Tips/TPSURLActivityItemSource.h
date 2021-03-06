/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:30:51 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class NSURL, TPSTip, NSString;

@interface TPSURLActivityItemSource : NSObject <UIActivityItemSource> {

	NSURL* _url;
	TPSTip* _tip;

}

@property (nonatomic,retain) TPSTip * tip;                          //@synthesize tip=_tip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TPSTip *)tip;
-(void)setTip:(TPSTip *)arg1 ;
-(id)initWithTip:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
@end

