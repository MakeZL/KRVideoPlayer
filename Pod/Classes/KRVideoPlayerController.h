//
//  KRVideoPlayerController.h
//  KRKit
//
//  Created by aidenluo on 5/23/15.
//  Copyright (c) 2015 36kr. All rights reserved.
//

@import MediaPlayer;

@interface KRVideoPlayerController : MPMoviePlayerController

@property (nonatomic, copy)void(^dimissCompleteBlock)(void);
@property (nonatomic, copy)void(^fullScreenChangeCompleteBlock)(void);
@property (nonatomic, copy)void(^shrinkScreenChangeCompleteBlock)(void);
@property (nonatomic, assign) CGRect frame;

- (instancetype)initWithFrame:(CGRect)frame;
- (void)showInWindow;
- (void)showInView:(UIView *)view;
- (void)dismiss;

@end
