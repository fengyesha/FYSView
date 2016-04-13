//
//  FYSViewSDK.h
//  FYSViewMask
//
//  Created by 枫叶砂 on 16/4/7.
//  Copyright © 2016年 枫叶砂. All rights reserved.
//

#ifndef FYSViewSDK_h
#define FYSViewSDK_h

@interface FYS_Header : NSObject
typedef enum : NSUInteger {
    MaskType_Top,
    MaskType_Bottom,
    MaskType_Left,
    MaskType_Right,
} MaskType;
@end

@interface FYSView : UIView
@property (nonatomic , assign) CGFloat radius;
@property (nonatomic , assign) CGFloat side;
@property (nonatomic , assign) CGFloat location;
@property (nonatomic , assign) MaskType FYS_Type;
/**
 *  创建遮罩视图 
 *
 *  @param frame
 *
 *  @return
 */
- (id)initWithFrame:(CGRect)frame;
/**
 *  创建遮罩视图
 *
 *  @param frame    视图的frame
 *  @param radius   圆角
 *  @param side     三角形的边长，这是一个正三角形
 *  @param location 三角形的左点距视图的左、上的距离
 *  @param type     三角形的位置 上、左、下、右
 *
 *  @return
 */
- (id)initWithFrame:(CGRect)frame cornerRadius:(CGFloat)radius side:(CGFloat)side location:(CGFloat)location maskType:(MaskType)type;
@end
#endif /* FYSViewSDK_h */
