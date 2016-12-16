//
//  HTTargetInfosManager.h
//  Pods
//
//  Created by sky on 12/29/15.
//
//

#import <Foundation/Foundation.h>

@class HTObserverInformation;

@interface HTTargetInfosManager : NSObject

/*!
 添加一项被观察者信息
 
 @param target   被观察者
 @param observer 观察者
 @param keyPath  被观察的属性相对于被观察者的键路径
 @param options  @see NSKeyValueObservingOptions
 @param context  注册 observer 时传递给 observer 的上下文
 
 @return YES，如果添加成功；
 NO，如果添加失败，例如当 HT_SAFE_OBSERVER_ALLOW_MULTIPLE_REGISTRATIONS 为 0 时，两次添加相同信息会导致添加失败。
 */
- (BOOL)addInformationWithTarget:(NSObject *)target
                        observer:(NSObject *)observer
                           keyPath:(NSString *)keyPath
                           options:(NSKeyValueObservingOptions)options
                           context:(void *)context;

/*!
 删除一项观察者信息
 
 @param target   被观察者
 @param observer 观察者
 @param keyPath  被观察的属性相对于被观察者的键路径
 @param context  注册 observer 时传递给 observer 的上下文
 
 @return YES，如果删除成功；
 NO， 如果删除失败，例如没有当前指定的信息。
 */
- (BOOL)removeInformationWithTarget:(NSObject *)target
                           observer:(NSObject *)observer
                            keyPath:(NSString *)keyPath
                            context:(void *)context;

- (BOOL)removeInformation:(HTObserverInformation *)info;

@end
