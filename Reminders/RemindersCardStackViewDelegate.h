/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:47:45 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RemindersCardStackViewDelegate
@required
-(BOOL)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2;
-(void)cardStackViewDidPresentCard:(id)arg1;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(long long)arg3;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2;
-(long long)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(long long)arg2 toProposedIndex:(long long)arg3;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(long long)arg2 toIndex:(long long)arg3;
-(void)cardStackViewDidEndReordering:(id)arg1;
-(BOOL)cardStackView:(id)arg1 canReorderCardAtIndex:(long long)arg2;

@end

