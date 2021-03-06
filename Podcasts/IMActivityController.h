/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class NSArray;

@interface IMActivityController : NSObject {

	/*^block*/id _completionHandler;
	NSArray* _excludedActivityTypes;
	Class _fallbackViewControllerClass;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	NSArray* _expandedActivityItems;

}

@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                  //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) Class fallbackViewControllerClass;              //@synthesize fallbackViewControllerClass=_fallbackViewControllerClass - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;                        //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,retain) NSArray * applicationActivities;                //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) NSArray * expandedActivityItems;                //@synthesize expandedActivityItems=_expandedActivityItems - In the implementation block
-(id)viewControllerForceIM:(BOOL)arg1 ;
-(NSArray *)expandedActivityItems;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)expandedActivityItemsFromActivityItems:(id)arg1 conformingToProtocol:(id)arg2 ;
-(void)setFallbackViewControllerClass:(Class)arg1 ;
-(Class)fallbackViewControllerClass;
-(void)setExpandedActivityItems:(NSArray *)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(id)viewController;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItems;
-(NSArray *)applicationActivities;
@end

