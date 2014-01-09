//
//  AnimatorShowDetailForDismissMHGallery.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 08.01.14.
//  Copyright (c) 2014 Mario Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHVideoImageGalleryGlobal.h"
#import "MHUIImageViewContentViewAnimation.h"

@interface AnimatorShowDetailForDismissMHGallery : UIPercentDrivenInteractiveTransition<UIViewControllerAnimatedTransitioning>

@property (nonatomic, strong) UIImageView *iv;
@property (nonatomic, strong) MHUIImageViewContentViewAnimation *cellImageSnapshot;
@property (nonatomic, assign) BOOL interactionInProgress;
@property (nonatomic,assign) CGFloat changedPoint;

@property (nonatomic,assign) id <UIViewControllerContextTransitioning> context;
@end